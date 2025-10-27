
import numpy as np
import matplotlib.pyplot as plt

# načítanie počiatočného riešenia
data_initial = np.loadtxt('initial.csv', delimiter=',')
x_init = data_initial[:, 0]
u_init = data_initial[:, 1]

# načítanie konečného riešenia
data_final = np.loadtxt('final.csv', delimiter=',')
x_final = data_final[:, 0]
u_final = data_final[:, 1]

# vykreslenie
plt.figure(figsize=(8,5))
plt.plot(x_init, u_init, label='Počáteční podmínka')
plt.plot(x_final, u_final, label='Výsledek')
plt.xlabel('x')
plt.ylabel('u(x)')
plt.legend()
plt.grid(True)
plt.savefig('final.png', dpi=300)
