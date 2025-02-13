# **Indexação**

## **O que é Indexação?**
A **indexação** é o processo de acessar um **elemento específico** de um array, lista ou outra estrutura de dados usando um **índice** (ou uma combinação de índices, no caso de arrays multidimensionais).

### **Sintaxe:**
- Para arrays 1D: `array[indice]`
- Para arrays 2D: `array[linha, coluna]`
- Para arrays 3D: `array[fatia, linha, coluna]`

### **Exemplos:**
```python
import numpy as np
arr = np.array([10, 20, 30, 40, 50])
print(arr[2])  # Acessa o terceiro elemento (índice 2)