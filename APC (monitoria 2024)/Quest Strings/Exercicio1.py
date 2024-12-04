entrada = input()
contador = 0
for letra in entrada:
    if letra == ',':
        contador +=1

if contador == 0:
    print('failed')

else: 
    print('passed')
    