import pandas as pd

# Dicionário contendo os arquivos para Fibonacci(25)
files_fib25 = {
    "Recursive -O2": "fibr_48_o2.csv",
    "Recursive -O0": "fibr_48_o0.csv",
    "Iterative -O2": "fibi_48_o2.csv",
    "Iterative -O0": "fibi_48_o0.csv",
}

# Lista para armazenar os DataFrames
dfs_fib25 = []

# Carregar e identificar os dados
for label, file in files_fib25.items():
    df_temp = pd.read_csv(file)
    df_temp[" Implementation"] = label  # Adiciona identificação
    dfs_fib25.append(df_temp)

# Concatenar os 4 CSVs do Fibonacci(25)
df_fib25 = pd.concat(dfs_fib25, ignore_index=True)

# Exibir os primeiros dados para verificação
print(df_fib25.head())

df_fib25.to_csv(r"C:/Users/mikas/Desktop/Aulas/2_semestre/TDS/TP1/ex1/powercap_48/all_fib48.csv", index=False)


