Instrucciones para el Código Secuencial de Conversión a Escala de Grises
Este código utiliza OpenCV para cargar una imagen en formato JPG, la convierte a escala de grises y guarda la imagen resultante. Además, proporciona el tiempo de ejecución del proceso.

Requisitos Previos
Asegúrate de tener instalado OpenCV en tu sistema antes de compilar y ejecutar este código. Puedes instalar OpenCV en sistemas basados en Debian (como Ubuntu) con el siguiente comando:

bash
Copy code
sudo apt-get install libopencv-dev
Compilación y Ejecución
Clonar el Repositorio:

bash
Copy code
git clone https://github.com/NobleBio/TareaSistemasOperativos.git
Ingresar al Directorio del Código Secuencial:

bash
Copy code
cd TareaSistemasOperativos/Secuencial
Compilar el Código:

bash
Copy code
make
Esto creará el ejecutable output/convertirGrises.

Ejecutar el Programa:

bash
Copy code
./output/convertirGrises
El programa leerá la imagen especificada en imagenColor.jpg, la convertirá a escala de grises, imprimirá el tiempo de ejecución y guardará la imagen en escala de grises como imagenGris.jpg en el directorio actual.

Limpiar Archivos Generados
Para limpiar los archivos generados durante la compilación, puedes usar el siguiente comando:

bash
Copy code
make clean
Esto eliminará los archivos temporales y el ejecutable.
