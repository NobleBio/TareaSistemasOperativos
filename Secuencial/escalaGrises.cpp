#include <iostream>
#include <opencv2/opencv.hpp>
#include <chrono>

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

    // Convertir la imagen a escala de grises
    for (int r = 0; r < image.rows; r++) {
        for (int c = 0; c < image.cols; c++) {
            // Calcular el valor de gris
            int gray = 0.2989 * image.at<Vec3b>(r, c)[0] +
                        0.5870 * image.at<Vec3b>(r, c)[1] +
                        0.1140 * image.at<Vec3b>(r, c)[2];

            // Guardar el valor de gris en la imagen en escala de grises
            image_grayscale.at<uchar>(r, c) = gray;
        }
    }

    // Detener el temporizador
    auto stop = chrono::high_resolution_clock::now();

    // Calcular el tiempo de ejecución
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Tiempo de ejecución: " << duration.count() << " microsegundos" << endl;

    // Guardar la imagen en escala de grises
    imwrite("imagenGris.jpg", image_grayscale);

    return 0;
}
