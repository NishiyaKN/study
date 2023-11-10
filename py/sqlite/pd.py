import pandas as pd
series_obj = pd.Series([1,7,9,13,17,99]) # indices de 0 a n
series_obj2 = pd.Series([4,7,8,-2], index = ['alfa', 'beta', 'teta', 'gama']) # indices personalizados
print(series_obj)
print(series_obj2)

disciplinas = {'cursos': ['Estatistica', 'Economia', 'Calculo', 'Geometria'],
               'creditos': [90, 60, 90, 40],
               'requisito': [True, False, True, False]}

data = pd.DataFrame(disciplinas)
print(data)
