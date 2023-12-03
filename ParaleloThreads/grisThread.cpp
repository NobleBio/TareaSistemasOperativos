#include <iostream>
#include <opencv2/opencv.hpp>
#include <chrono>
#include <thread>
#include <vector>

using namespace cv;
using namespace std;

void convertToGrayscale(const Mat& image, Mat& result, int start_row, int end_row) {
    for (int r = start_row; r < end_row; r++) {
        for (int c = 0; c < image.cols; c++) {
            int gray = 0.2989 * image.at<Vec3b>(r, c)[0] +
                        0.5870 * image.at<Vec3b>(r, c)[1] +
                        0.1140 * image.at<Vec3b>(r, c)[2];
            result.at<uchar>(r, c) = gray;
        }
    }
}

int main() {
    // Leer la imagen en formato JPEG
    Mat image = imread("imagenColor.jpg", IMREAD_COLOR);

    // Verificar si la imagen se ha cargado correctamente
    if (image.empty()) {
        cout << "No se pudo abrir o encontrar la imagen" << endl;
        return -1;
    }

    // Crear una imagen en escala de grises con el mismo tamaño que la imagen original
    Mat image_grayscale = Mat::zeros(image.size(), CV_8UC1);

    // Iniciar el temporizador
    auto start = chrono::high_resolution_clock::now();

    // Número de hebras
    int num_threads = thread::hardware_concurrency();

    // Vector para almacenar los objetos de hebra
    vector<thread> threads;

    // Dividir la imagen en partes y procesar en paralelo
    int rows_per_thread = image.rows / num_threads;
    for (int i = 0; i < num_threads; i++) {
        int start_row = i * rows_per_thread;
        int end_row = (i + 1) * rows_per_thread;
        threads.emplace_back(convertToGrayscale, ref(image), ref(image_grayscale), start_row, end_row);
    }

    // Esperar a que todas las hebras terminen
    for (auto& t : threads) {
        t.join();
    }

    // Detener el temporizador
    auto stop = chrono::high_resolution_clock::now();

    // Calcular el tiempo de ejecución
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Tiempo de ejecución paralelo con thread: " << duration.count() << " microsegundos" << endl;

    // Guardar la imagen en escala de grises
    imwrite("imagen_gris_thread.jpg", image_grayscale);

    return 0;
}
