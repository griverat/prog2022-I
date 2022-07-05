# -*- coding: utf-8 -*-
"""
Created on Tue Jun 28 17:24:00 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER dia
LEER mes
LEER anio

SI mes >= 1 Y mes <= 12 :

    leap=False
    SI anio % 4 == 0 Y (anio % 100 != O OR anio % 400 == 0):
        leap=True

    SI leap es False Y mes == 2 Y dia > 28:
        ESCRIBIR "El mes tiene 28 dias"

    doy = 0

    SI leap:
        FEB = 29
    SINO:
        FEB = 28

    SI mes == 1:
        doy = dia
    SINO SI mes == 2:
        doy = dia + 31
    SINO SI mes == 3:
        doy = dia + 31 + FEB
    SINO SI mes == 4:
        doy = dia + 31 + FEB + 31
    SINO SI mes == 5:
        doy = dia + 31 + FEB + 31 + 30
    SINO SI mes == 6:
        doy = dia + 31 + FEB + 31 + 30 + 31
    SINO SI mes == 7:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30
    SINO SI mes == 8:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31
    SINO SI mes == 9:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31 + 31
    SINO SI mes == 10:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31 + 31 + 30
    SINO SI mes == 11:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31
    SINO SI mes == 12:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30

    ESCRIBIR "El dia " + str(dia) + " del mes " + str(mes) + " del anio " + str(anio) + " corresponde al dia " + str(doy)
SINO:
    ESCRIBIR "Ingrese un mes valido"

"""

dia = eval(input("Ingrese un dia: "))
mes = eval(input("Ingrese un mes: "))
anio = eval(input("Ingrese un año: "))

if mes >= 1 and mes <= 12:

    leap = False
    if anio % 4 == 0 and (anio % 100 != 0 or anio % 400 == 0):
        leap = True

    if leap is False and mes == 2 and dia > 28:
        print("El mes tiene 28 dias")

    doy = 0

    if leap:
        FEB = 29
    else:
        FEB = 28

    if mes == 1:
        doy = dia
    elif mes == 2:
        doy = dia + 31
    elif mes == 3:
        doy = dia + 31 + FEB
    elif mes == 4:
        doy = dia + 31 + FEB + 31
    elif mes == 5:
        doy = dia + 31 + FEB + 31 + 30
    elif mes == 6:
        doy = dia + 31 + FEB + 31 + 30 + 31
    elif mes == 7:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30
    elif mes == 8:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31
    elif mes == 9:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31 + 31
    elif mes == 10:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31 + 31 + 30
    elif mes == 11:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31
    elif mes == 12:
        doy = dia + 31 + FEB + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30

    print(f"El dia {dia} del mes {mes} del año {anio} corresponde al dia {doy}")
else:
    print("Ingrese un mes valido")
