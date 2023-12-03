Instrucciones para el Código Paralelo con Thread de Conversión a Escala de Grises
Este código utiliza OpenCV para cargar una imagen en formato JPG, la convierte a escala de grises y guarda la imagen resultante. Además, proporciona el tiempo de ejecución del proceso utilizando hebras.

Requisitos Previos
Asegúrate de tener instalado OpenCV en tu sistema antes de compilar y ejecutar este código. Puedes instalar OpenCV en sistemas basados en Debian (como Ubuntu) con el siguiente comando:

En la terminal
sudo apt-get install libopencv-dev

Compilación y Ejecución
Clonar el Repositorio:

En la terminal
git clone https://github.com/NobleBio/TareaSistemasOperativos.git

------------------------

Ingresar al Directorio del Código con Thread:

En la terminal
cd TareaSistemasOperativos/ParaleloThreads

------------------------

Compilar el Código:

En la terminal
make
Esto creará el ejecutable output/grisThread.

------------------------

Ejecutar el Programa:

En la terminal
cd output
./grisThread

------------------------

Asegúrate de tener una imagen llamada imagenColor.jpg en la carpeta output. El programa convertirá esta imagen a escala de grises y guardará el resultado como imagen_gris_thread.jpg en la misma carpeta.

Limpiar Archivos Generados
Para limpiar los archivos generados durante la compilación, puedes usar el siguiente comando:

En la terminal
make clean
Esto eliminará los archivos temporales y el ejecutable.
