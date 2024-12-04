palavra = input()
total_letras = 0
sao_vogais = 0
sao_consoantes = 0
vogais = 'aeiouAEIOUyY'
for i in palavra:
    total_letras+=1
    if i in vogais:
        sao_vogais+=1

    elif i.isalpha() and i not in vogais:
        sao_consoantes+=1

print(total_letras)
print(sao_vogais)
print(sao_consoantes)

primeiros_dois = palavra[:2]
ultimos_dois = palavra[-2:]
nova_palavra = primeiros_dois + ultimos_dois
print(nova_palavra)

