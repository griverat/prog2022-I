# -*- coding: utf-8 -*-
"""
Created on Tue Jun 21 17:28:55 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER nota1
LEER nota2
LEER nota3

SI nota1 > 20 O nota1 < 0 O nota2 > 20 O nota2 < 0 O nota3 > 20 O nota3 < 0:
    ESCRIBIR "Alguna nota esta fuera de rango"
SINO:
    MEDIA = (nota1 + nota2 + nota3) / 3

    SI MEDIA >= 11:
        ESCRIBIR "El promedio es {MEDIA} y el alumno aprobo"
    SINO:
        ESCRIBIR "El promedio es {MEDIA} y el alumno reprobo"

"""

print("Ingrese 3 notas entre 0 y 20\n")
nota1 = eval(input("Ingrese la nota 1: "))
nota2 = eval(input("Ingrese la nota 2: "))
nota3 = eval(input("Ingrese la nota 3: "))

if nota1 > 20 or nota1 < 0 or nota2 > 20 or nota2 < 0 or nota3 > 20 or nota3 < 0:
    print("Alguna nota es inválida")
else:
    mean = (nota1 + nota2 + nota3) / 3

    condicion = "Desaprobado"
    if mean >= 11:
        condicion = "Aprobado"

    print(f"El promedio es {mean:2.2f} y la condicion es {condicion}")
