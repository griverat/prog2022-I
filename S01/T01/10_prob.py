# -*- coding: utf-8 -*-
"""
Created on Tue Jun 21 17:29:00 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

CONSTANTE SHOE_COST = 80

LEER cantidad

SI cantidad % 1 != 0
    ESCRIBIR "La cantidad debe ser un numero entero"
SINO SI cantidad <=0:
    ESCRIBIR "La cantidad debe ser mayor a 0"
SINO
    SI cantidad > 10 y cantidad <= 20:
        descuento = 0.10
    SINO SI cantidad > 20 y cantidad <= 30:
        descuento = 0.20
    SINO SI cantidad > 30:
        descuento = 0.40
    SINO
        descuento = 0
    ESCRIBIR "El costo bruto es: {SHOE_COST * cantidad}"
    ESCRIBIR "El descuento es: {descuento}"
    ESCRIBIR "El descuento aplicado: {SHOE_COST * cantidad * descuento}"
    ESCRIBIR "El precio total es: {SHOE_COST * cantidad * (1 - descuento)}"

"""

SHOE_COST = 80

amount_shoes = eval(input("Ingrese la cantidad de zapatos: "))

if amount_shoes % 1 != 0:
    print("La cantidad de zapatos debe ser un numero entero")
elif amount_shoes <= 0:
    print("La cantidad de zapatos debe ser un numero positivo no nulo")
else:
    if amount_shoes > 10 and amount_shoes <= 20:
        discount = 0.10
    elif amount_shoes > 20 and amount_shoes <= 30:
        discount = 0.20
    elif amount_shoes > 30:
        discount = 0.40
    else:
        discount = 0.00

    print(
        f"El costo bruto es: ${SHOE_COST * amount_shoes:.1f}\n"
        f"El descuento a aplicar es del {discount:.0%}\n"
        f"La cantidad descontada es: ${SHOE_COST * amount_shoes * discount:.1f}\n"
        f"El total a pagar es: ${SHOE_COST * amount_shoes * (1 - discount):.1f}"
    )
