# -*- coding: utf-8 -*-
"""
Created on Tue Jun 28 17:04:43 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER importe
LEER pago

vuelto = pago - importe

monedas100 = vuelto // 100
monedas50 = (vuelto - 100*monedas100) // 50
monedas25 = (vuelto - 100*monedas100 - 50*monedas50) // 25
monedas5 = (vuelto - 100*monedas100 - 50*monedas50 - 25*monedas25) // 5
monedas1 = (vuelto - 100*monedas100 - 50*monedas50 - 25*monedas25 - 5*monedas5) // 1

ESCRIBIR "El vuelto es: ${vuelto:2.2f}"
ESCRIBIR "Monedas de 100: {monedas100}"
ESCRIBIR "Monedas de 50: {monedas50}"
ESCRIBIR "Monedas de 25: {monedas25}"
ESCRIBIR "Monedas de 5: {monedas5}"
ESCRIBIR "Monedas de 1: {monedas1}"

"""

importe = eval(input("Ingrese el importe: "))
pago = eval(input("Ingrese el pago: "))

vuelto = pago - importe

monedas100 = vuelto // 100
monedas50 = (vuelto - 100 * monedas100) // 50
monedas25 = (vuelto - 100 * monedas100 - 50 * monedas50) // 25
monedas5 = (vuelto - 100 * monedas100 - 50 * monedas50 - 25 * monedas25) // 5
monedas1 = (
    vuelto - 100 * monedas100 - 50 * monedas50 - 25 * monedas25 - 5 * monedas5
) // 1

print(f"El vuelto es: ${vuelto:2.2f}")
print(f"Monedas de 100: {monedas100}")
print(f"Monedas de 50: {monedas50}")
print(f"Monedas de 25: {monedas25}")
print(f"Monedas de 5: {monedas5}")
print(f"Monedas de 1: {monedas1}")
