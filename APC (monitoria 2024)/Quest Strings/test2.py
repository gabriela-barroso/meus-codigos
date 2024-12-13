n = int(input())
media = 0
maior = ""
menor = ""
valormenor = float('inf')
valormaior = float()
if n == 0:
    print("Não tem média")
    print('Não tem')
    print ('Não tem')
else:
    for i in range(n):
        colab,salario = input().split(',')
        media += float(salario)
        if float(salario) > valormaior:
            valormaior = float(salario)
            maior = colab
        if float(salario) < valormenor:
            valormenor = float(salario)
            menor = colab
    print(f'{(media/n):.2f}')
    print(f'{maior} {valormaior:.2f}')
    print(f'{menor} {valormenor:.2f}')