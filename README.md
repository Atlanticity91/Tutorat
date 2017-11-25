# Tutorat
Repo pour le tutorat d'info111.

## Compilation
### **Rappel**
| | Signification|
|-------------- | -------------|
|g++ | Indique que l'on souhaite utiliser g++ pour compiler |
|-std=c++11 | Indique que l'on souhaite utiliser la version 11 de la librairie standard|
|*.cpp | L'asterisk indique a g++ que l'on souhaite compiler tout les fichiers .cpp qu'il trouvera dans le repertoire courant|
|-o | Indique que l'on souhaite un fichier executable en sortie|
| nom | Nom du fichier executable de sortie |

### **Linux**

g++ -std=c++11 *.cpp -o nom

### **Windows**

|Compilateur | Commande|
|------------ | -------------|
|MinGW | g++ -std=c++11 *.cpp -o nom |
|Code::Blocks | Appuyer sur F9|
