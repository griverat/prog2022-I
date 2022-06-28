# -*- coding: utf-8 -*-
"""
Created on Tue Jun 28 15:17:22 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

BASE_WAGE = 20
EXTRA_WAGE = 25

wk_hours = eval(input("Ingrese las horas trabajadas: "))
wk_minutes = eval(input("Ingrese los minutos trabajados: "))

if wk_hours < 0 or wk_minutes < 0:
    raise ValueError("Las horas y minutos deben ser positivos")
elif wk_minutes > 60:
    raise ValueError("Los minutos no pueden ser mayores a 60")

_tot_hours = wk_hours + (wk_minutes / 60)
minute_wage = 0
_wk_hours = wk_hours

if _tot_hours <= 40:
    extra_hours = 0
    minute_wage = BASE_WAGE / 60
elif _tot_hours > 40:
    if wk_minutes != 0:
        _wk_hours += 1
    extra_hours = _wk_hours - 40
    _wk_hours = 40

base = BASE_WAGE * _wk_hours + minute_wage * wk_minutes
extra = EXTRA_WAGE * extra_hours
pago = base + extra

print(
    f"El pago total por trabajar {wk_hours} horas "
    f"y {wk_minutes} minutos es: ${pago:2.2f}"
)
