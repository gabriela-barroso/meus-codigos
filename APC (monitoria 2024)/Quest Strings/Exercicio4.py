entrada = input()
entrada_impar = ''
for letra in range(1, len(entrada), 2):
    if entrada[letra] != ' ':
        entrada_impar+=entrada[letra]

print(entrada_impar)

