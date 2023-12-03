Instrucciones para el Código Secuencial de Conversión a Escala de Grises
Este código utiliza OpenCV para cargar una imagen en formato JPG, la convierte a escala de grises y guarda la imagen resultante. Además, proporciona el tiempo de ejecución del proceso.

Requisitos Previos
Asegúrate de tener instalado OpenCV en tu sistema antes de compilar y ejecutar este código. Puedes instalar OpenCV en sistemas basados en Debian (como Ubuntu) con el siguiente comando:

En la terminal
sudo apt-get install libopencv-dev

Compilación y Ejecución

Clonar el Repositorio:

En la terminal
git clone https://github.com/NobleBio/TareaSistemasOperativos.git

-----------------------

Ingresar al Directorio del Código Secuencial:

En la terminal
cd TareaSistemasOperativos/Secuencial

-----------------------

Compilar el Código:

En la terminal
make
Esto creará el ejecutable output/convertirGrises.

En caso de que el resultado del comando make sea: "make: Nothing to be done for 'all', esto indica que el programa ya esta compilado y no se han registrado cambios en el codigo por lo que no es necesario volverlo a compilar
-----------------------

Ejecutar el Programa:

En la terminal
./output/convertirGrises
El programa leerá la imagen especificada en imagenColor.jpg, la convertirá a escala de grises, imprimirá el tiempo de ejecución y guardará la imagen en escala de grises como imagenGris.jpg en el directorio actual.

Limpiar Archivos Generados
Para limpiar los archivos generados durante la compilación, puedes usar el siguiente comando:

En la terminal
make clean
Esto eliminará los archivos temporales y el ejecutable.
