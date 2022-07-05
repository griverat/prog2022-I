# -*- coding: utf-8 -*-
"""
Created on Tue Jun 28 17:23:29 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER pp
LEER sp
LEER ef
LEER er

SI er > pp:
    pp = er
SINO SI er > sp:
    sp = er
SINO SI er > ef:
    ef = er

nota_final = (30 * pp + 30 * sp + 60 * ef) /100

SI nota_final > 51:
    ESCRIBIR "Aprobado"
SINO:
    ESCRIBIR "Reprobado"
"""

pp = eval(input("Ingrese la nota del primer parcial: "))
sp = eval(input("Ingrese la nota del segundo parcial: "))
ef = eval(input("Ingrese la nota del examen final: "))
er = eval(input("Ingrese la nota del examen sustitutorio: "))

if pp > 30 or sp > 30 or ef > 40 or er > 30:
    raise ValueError(
        "Las notas parciales y sustitutorio deben ser menores a 30 "
        "y el examen final debe ser menor a 40"
    )

if er > pp:
    pp = er
elif er > sp:
    sp = er
elif er > ef:
    ef = er

nota_final = pp + sp + ef

print(f"La nota final es: {nota_final}")

if nota_final > 51:
    print("Aprobado")
else:
    print("Reprobado")
