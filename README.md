# ft_printf 💻✨

**ft_printf** es un proyecto del programa 42 que consiste en reprogramar la función `printf()` de la biblioteca estándar de C (libc). La función `printf()` es ampliamente utilizada para formatear y mostrar información, y en este proyecto deberás crear tu propia versión de la misma.

## Prototipo de la función 🛠️

El prototipo de la función que debes implementar es el siguiente:

```c
int ft_printf(const char *, ...);
```

## Requisitos 📜

Este proyecto tiene los siguientes requisitos:

- No debes implementar la gestión del buffer del `printf()` original.
- Implementarás las siguientes conversiones:
  - `%c`: Imprime un solo carácter.
  - `%s`: Imprime una cadena de caracteres (string).
  - `%p`: Imprime un puntero `void *` en formato hexadecimal.
  - `%d` o `%i`: Imprime un número entero en base 10.
  - `%u`: Imprime un número decimal sin signo en base 10.
  - `%x`: Imprime un número en hexadecimal (base 16) en minúsculas.
  - `%X`: Imprime un número en hexadecimal (base 16) en mayúsculas.
  - `%%`: Imprime el símbolo del porcentaje `%`.

## Archivos del Proyecto 📂

- `Makefile`: Archivo para la compilación del proyecto.
- `ft_printf.c`: Implementación principal de la función `ft_printf`.
- `ft_printf.h`: Archivo de cabecera con las definiciones y prototipos.
- `ft_putchar.c`: Función auxiliar para imprimir un solo carácter.
- `ft_puthex.c`: Función auxiliar para imprimir un número en formato hexadecimal.
- `ft_putnbr.c`: Función auxiliar para imprimir un número entero.
- `ft_putptr.c`: Función auxiliar para imprimir un puntero en formato hexadecimal.
- `ft_putstr.c`: Función auxiliar para imprimir una cadena de caracteres.
- `ft_putunsigned.c`: Función auxiliar para imprimir un número decimal sin signo.

## Cómo compilarlo ⚙️

Para compilar el proyecto y generar la librería `libftprintf.a`, ejecuta en la terminal:

  ```bash
  make
  ```
Esto generará el archivo `libftprintf.a` que puedes usar en tus proyectos para reemplazar el `printf()` estándar.

- Para limpiar los archivos `.o` generados por la compilación:

  ```bash
  make clean
  ```

- Para limpiar todo, incluidos los archivos binarios:
  ```bash
  make fclean
  ```

- Para recompilar todo desde cero:
  ```bash
  make re
  ```

### Enlace a la Wiki 📝

Para obtener más información sobre las funciones implementadas y ver ejemplos de uso, puedes visitar la [Wiki del repositorio](https://github.com/Marcos03BR/ft_printf/wiki).
