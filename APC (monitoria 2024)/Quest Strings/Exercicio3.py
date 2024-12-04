entrada = input()
contador = 0
for letra in entrada:
    if letra.isdigit():
        contador+=1

print(contador)