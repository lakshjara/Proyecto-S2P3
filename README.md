# Agenda de Contactos

### Contexto
Este proyecto representa el diseño de un sistema de gestión de contactos, programación orientada a objetos con C++. Se basa en la estructura de una agenda digital, donde puedes agregar, buscar y listar contactos desde la consola. Muy similar a las que usamos en nuestros teléfonos o plataformas de correo electrónico.

El objetivo principal del sistema es almacenar, organizar y buscar contactos eficientemente, permitiendo asociar a cada contacto información clave como nombre, teléfono, correo electrónico, dirección y en caso de que sean contactos laborales o sociales se incluyen datos más específicos. 

### Problemática
Las personas suelen tener dificultades para gestionar y acceder eficientemente a sus contactos cuando estos se encuentran en formatos desorganizados.
Este sistema ayuda a:
- Recordar información clave de cada contacto.
- Buscar personas por su nombre de forma rápida.
- Organizar contactos con múltiples datos sin perder información.

### Funcionalidad

Agregar contacto social: Guarda nombre, teléfono, apodo, dirección y correo.
Agregar contacto laboral: Guarda nombre, teléfono, empresa y correo.
Buscar contacto: Por nombre exacto.
Listar contactos: Imprime todos los contactos guardados, mostrando su información formateada.
Eliminar contactos: Borra contactos de la memoria. 
Editar contactos: Permite modificar cualquier dato del contacto. 

### Potenciales errores
- Error al buscar contactos cuando el contacto no existe y el programa intenta acceder a él sin verificar.
- Contacto mal creado o incompleto si faltan datos obligatorios como nombre, teléfono o correo.
- Datos duplicados: se permiten contactos con el mismo nombre o correo, causando conflictos en búsqueda o edición.
- Fallas de entrada/salida, como error al cargar o guardar datos, o que los datos estén incorrectos o dañados.
- Entrada de usuario no validada: ingreso de texto en vez de número para el teléfono o campos vacíos que causan errores de ejecución.

### Estructura del Sistema

El sistema está compuesto por varias clases con funciones definidas:

- Persona: Clase base abstracta que almacena el nombre del contacto.
- Contacto: Hereda de Persona y es una clase abstracta que agrega el teléfono.
- ContactoSocial: Hereda de Contacto y añade apodo, dirección y correo electrónico.
- ContactoLaboral: Hereda de Contacto y añade empresa y correo electrónico.
- Agenda: Administra un arreglo de contactos.

### Uso básico

1. Agregar contacto:
Elige el tipo (social o laboral) y completa los datos que pide la consola.
2. Buscar contacto:
Si coincide, muestra el primer contacto encontrado, si no, informa que no existe.
3. Listar contactos:
Imprime en consola todos los contactos con su información completa.
4. Borrar y editar contactos:
Modifica un contacto seleccionado. 

### Cómo usar el programa

1. Compila los archivos:
```bash
g++ -std=c++11 main.cpp -o agenda
```
2. Ejecuta el programa:
```bash
./agenda
```
3. Sigue el menú para agregar, buscar, editar y eliminar contactos.

### Requisitos técnicos

Lenguaje: C++

Compilador: g++

Sistema operativo: Windows/Linux/macOS

