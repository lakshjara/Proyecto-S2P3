# Agenda de Contactos

### Contexto
Este proyecto representa el diseño de un sistema de gestión de contactos, simulado mediante clases en programación orientada a objetos con C++. Se basa en la estructura de una agenda digital, similar a las que usamos en nuestros teléfonos o plataformas de correo electrónico.

El objetivo principal del sistema es almacenar, organizar y buscar contactos eficientemente, permitiendo asociar a cada contacto información clave como nombre, teléfono, correo electrónico y dirección.

### Problemática
Las personas suelen tener dificultades para gestionar y acceder eficientemente a sus contactos cuando estos se encuentran en formatos desorganizados, dispersos o sin mecanismos de búsqueda inteligentes.
Este proyecto ayuda a:
- Recordar información clave de cada persona.
- Buscar datos específicos de forma rápida.
- Organizar contactos con múltiples datos sin duplicar o perder información.

### Funcionalidad

La clase Agenda actúa como el núcleo del sistema, gestionando una colección de contactos.

Cada Contacto está compuesto por un Nombre, Teléfono, Correo y Dirección, lo que permite modularidad y reutilización de código.

Buscador implementa herramientas para localizar contactos eficientemente, apoyando la experiencia del usuario.

### Potenciales errores
- Error al buscar o eliminar contactos cuando el contacto no existe y el programa intenta acceder a él sin verificar.
- Contacto mal creado o incompleto si faltan datos obligatorios como nombre, teléfono o correo.
- Datos duplicados: se permiten contactos con el mismo nombre o correo, causando conflictos en búsqueda o edición.
- Fallas de entrada/salida, como error al cargar o guardar datos, o que los datos estén incorrectos o dañados.
- Intentar usar una clase que no está correctamente conectada.
- Entrada de usuario no validada: ingreso de texto en vez de número para el teléfono o campos vacíos que causan errores de ejecución.

### Estructura del Sistema

El sistema está compuesto por varias clases con responsabilidades bien definidas:

- Persona:	Clase abstracta base con nombre y correo
- Contacto:	Hereda de Persona. Incluye teléfono y dirección
- Telefono:	Almacena número y tipo de teléfono
- Direccion:	Contiene calle, ciudad, estado y código postal
- Buscador:	Filtra y localiza contactos según criterios
- Agenda:	Administra la lista de contactos (agregar, eliminar, buscar)

### Cómo usar el programa

1. Compila los archivos .cpp:
```bash
g++ main.cpp Contacto.cpp Telefono.cpp Direccion.cpp Buscador.cpp Agenda.cpp -o agenda
```
2. Ejecuta el programa:
./agenda

3. Sigue el menú para agregar, buscar, editar o eliminar contactos.

### Requisitos técnicos

Lenguaje: C++
Compilador: g++
Sistema operativo: Windows/Linux/macOS

