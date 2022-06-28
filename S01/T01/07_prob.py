# -*- coding: utf-8 -*-
"""
Created on Tue Jun 21 17:28:42 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER letra
letra = LOWER(letra)

SI len(letra) > 1:
    ESCRIBIR "Se escribio una palabra, se usara la primera letra"
    letra = letra[0]

SI letra == "a" O letra == "e" O letra == "i" O letra == "o" O letra == "u":
   ESCRIBIR "La letra es una vocal"
SINO:
    ESCRIBIR "La letra no es una vocal"

"""

# Lowercase the input
letra = input("Ingrese una letra: ").lower()

# Just in case the user enters a word instead of a letter
if len(letra) > 1:
    print("Se ingresó una palabra, se tomara solo la primera letra")
    letra = letra[0]

# More value checking here
if letra in list("1234567890"):
    raise ValueError("Se ingresó un número")

#####################
## Classic version ##
#####################
if letra == "a" or letra == "e" or letra == "i" or letra == "o" or letra == "u":
    print(f"La letra {letra} es una vocal")
else:
    print("La letra ingresada no es una vocal")

######################
## Pythonic version ##
######################
# if letra in list("aeiou"):
#     print(f"La letra {letra} es una vocal")
# else:
#     print("La letra ingresada no es una vocal")

###################################
## An even more pythonic version ##
##  only works in Python 3.10+   ##
###################################
# match letra:
#     case "a" | "e" | "i" | "o" | "u":
#         print(f"La letra {letra} es una vocal")
#     case _:
#         print("La letra ingresada no es una vocal")
