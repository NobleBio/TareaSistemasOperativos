#include <iostream>
#include <opencv2/opencv.hpp>
#include <chrono>
#include <omp.h>

using namespace cv;
using namespace std;

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
    int num_threads = omp_get_max_threads();

    // Dividir la imagen en partes y procesar en paralelo con OpenMP
    int rows_per_thread = image.rows / num_threads;

    // Habilitar paralelismo en el bucle for
    #pragma omp parallel for num_threads(num_threads)
    for (int i = 0; i < num_threads; i++) {
        int start_row = i * rows_per_thread;
        int end_row = (i + 1) * rows_per_thread;
        for (int r = start_row; r < end_row; r++) {
            for (int c = 0; c < image.cols; c++) {
                int gray = 0.2989 * image.at<Vec3b>(r, c)[0] +
                            0.5870 * image.at<Vec3b>(r, c)[1] +
                            0.1140 * image.at<Vec3b>(r, c)[2];
                image_grayscale.at<uchar>(r, c) = gray;
            }
        }
    }

    // Detener el temporizador
    auto stop = chrono::high_resolution_clock::now();

    // Calcular el tiempo de ejecución
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Tiempo de ejecución paralelo con OpenMP: " << duration.count() << " microsegundos" << endl;

    // Guardar la imagen en escala de grises
    imwrite("imagen_gris_openmp.jpg", image_grayscale);

    return 0;
}
