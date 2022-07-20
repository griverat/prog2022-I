# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 16:03:37 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

n = eval(input("Ingrese la cantidad de alumnos: "))

_n = 0
jalo = 0
aprobo = 0
while _n != n:
    nota = eval(input("Ingrese la nota del alumno: "))
    if nota >= 0 and nota <= 20:
        _n += 1
        if nota < 11:
            jalo += 1
        else:
            aprobo += 1
    else:
        print("La nota ingresada no es valida")

print("La cantidad de alumnos que no aprobaron es: ", jalo)
print("La cantidad de alumnos que aprobaron es: ", aprobo)
