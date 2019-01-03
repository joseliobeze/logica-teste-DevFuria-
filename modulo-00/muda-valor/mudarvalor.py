# -*- coding: utf-8 -*-

#
# Variáveis
#
a = 999
b = 555

#
# Sua lógica
#
var_temp = a
a = b 
b = var_temp

#
# Testes
#
assert a == 555
assert b == 999