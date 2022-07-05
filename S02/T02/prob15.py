# -*- coding: utf-8 -*-
"""
Created on Tue Jun 28 17:23:35 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER ingresos
LEER hijos

credito = False

SI ingresos > 12000 O ingresos < 12000 Y ingresos > 10000 Y hijos <= 2 O \
    ingresos < 10000 Y ingresos > 8000 Y hijos == 0:
    credito = True

SI credito:
    ESCRIBIR "Se le otorga credito"
SINO:
    ESCRIBIR "No se le otorga credito"

"""

ingresos = eval(input("Ingrese los ingresos: "))
hijos = eval(input("Ingrese los hijos: "))

credito = False

if (
    ingresos >= 12000
    or ingresos < 12000
    and ingresos >= 10000
    and hijos <= 2
    or ingresos < 10000
    and ingresos >= 8000
    and hijos == 0
):
    credito = True

if credito:
    print("Se le otorga credito")
else:
    print("No se le otorga credito")
