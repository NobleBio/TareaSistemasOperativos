Instrucciones para el Código Paralelo con OpenMP de Conversión a Escala de Grises
Este código utiliza OpenCV para cargar una imagen en formato JPG, la convierte a escala de grises y guarda la imagen resultante. Además, aprovecha OpenMP para realizar la conversión en paralelo, mejorando el rendimiento mediante el uso de múltiples hebras.

Requisitos Previos
Asegúrate de tener instalado OpenCV y OpenMP en tu sistema antes de compilar y ejecutar este código. Puedes instalar OpenCV en sistemas basados en Debian (como Ubuntu) con el siguiente comando:

En la terminal
sudo apt-get install libopencv-dev

-----------------------------

Para instalar OpenMP:

En la terminal
sudo apt-get install libomp-dev

-----------------------------

Compilación y Ejecución
Clonar el Repositorio:

En la terminal
git clone https://github.com/NobleBio/TareaSistemasOperativos.git

-----------------------------

Ingresar al Directorio del Código con OpenMP:

En la terminal
cd TareaSistemasOperativos/ParaleloOpenMP

-----------------------------

Compilar el Código:

En la terminal

make
Esto creará el ejecutable output/grisOpenMP.

En caso de que el resultado del comando make sea: "make: Nothing to be done for 'all', esto indica que el programa ya esta compilado y no se han registrado cambios en el codigo por lo que no es necesario volverlo a compilar
-----------------------------

Ejecutar el Programa:

En la terminal
cd output
./grisOpenMP

-----------------------------

Asegúrate de tener una imagen llamada imagenColor.jpg en la carpeta output. El programa convertirá esta imagen a escala de grises y guardará el resultado como imagen_gris_openmp.jpg en la misma carpeta.

Limpiar Archivos Generados
Para limpiar los archivos generados durante la compilación, puedes usar el siguiente comando:

En la terminal
make clean
Esto eliminará los archivos temporales y el ejecutable.
