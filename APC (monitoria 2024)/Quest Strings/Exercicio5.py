def substituir(entrada):
    if 'zero' in entrada:
        entrada = entrada.replace('zero','0')
        
    if 'um' in entrada:
        entrada = entrada.replace('um','1')

    if 'dois' in entrada:
        entrada = entrada.replace('dois','2')

    if 'três' in entrada:
        entrada = entrada.replace('três','3')

    if 'quatro' in entrada:
        entrada = entrada.replace('quatro','4')
           
    if 'cinco' in entrada:
        entrada = entrada.replace('cinco','5')

    if 'seis' in entrada:
        entrada = entrada.replace('seis','6')

    if 'sete' in entrada:
        entrada = entrada.replace('sete','7')

    if 'oito' in entrada:
        entrada = entrada.replace('oito','8')

    if 'nove' in entrada:
        entrada = entrada.replace('nove','9')

    return entrada

texto = input()

print(substituir(texto))

