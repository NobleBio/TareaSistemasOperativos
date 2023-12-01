Instrucciones para el Código Paralelo con OpenMP de Conversión a Escala de Grises
Este código utiliza OpenCV para cargar una imagen en formato JPG, la convierte a escala de grises y guarda la imagen resultante. Además, aprovecha OpenMP para realizar la conversión en paralelo, mejorando el rendimiento mediante el uso de múltiples hebras.

Requisitos Previos
Asegúrate de tener instalado OpenCV y OpenMP en tu sistema antes de compilar y ejecutar este código. Puedes instalar OpenCV en sistemas basados en Debian (como Ubuntu) con el siguiente comando:

bash
Copy code
sudo apt-get install libopencv-dev
Para instalar OpenMP:

bash
Copy code
sudo apt-get install libomp-dev
Compilación y Ejecución
Clonar el Repositorio:

bash
Copy code
git clone https://github.com/NobleBio/TareaSistemasOperativos.git
Ingresar al Directorio del Código con OpenMP:

bash
Copy code
cd TareaSistemasOperativos/ParaleloOpenMP
Compilar el Código:

bash
Copy code
make
Esto creará el ejecutable output/grisOpenMP.

Ejecutar el Programa:

bash
Copy code
cd output
./grisOpenMP
Asegúrate de tener una imagen llamada imagenColor.jpg en la carpeta output. El programa convertirá esta imagen a escala de grises y guardará el resultado como imagen_gris_openmp.jpg en la misma carpeta.

Limpiar Archivos Generados
Para limpiar los archivos generados durante la compilación, puedes usar el siguiente comando:

bash
Copy code
make clean
Esto eliminará los archivos temporales y el ejecutable.