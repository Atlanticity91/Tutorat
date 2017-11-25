# Tutorat
Repo pour le tutorat d'info111.

## Contenue
Le repo contient un code de correction du projet de rappel que nous avons fait en commun. Pour rappel le projet consistait à lire un fichier PBM et à afficher son contenu dans la console et à partir de données créer un fichier PBM.

## Compilation
### **Rappel compilation à la main avec GCC/MinGW**
|   | Signification|
|---------------- | -------------|
| g++ | Indique que l'on souhaite utiliser g++ pour compiler |
| -std=c++11  | Indique que l'on souhaite utiliser la version 11 de la librairie standard |
| *.cpp | L'asterisque indique à g++ que l'on souhaite compiler tout les fichiers .cpp qu'il trouvera dans le répertoire courant, souvent vous donnerez la liste des fichiers à compiler à la main ce qui vous donnera quelque chose de la forme fichier1.cpp ... fichierX.cpp|
| -o | Indique que l'on souhaite un fichier executable en sortie |
| nom | Nom du fichier executable de sortie |

### **Linux**

|Compilateur | Commande|
|------------ | -------------|
| GCC | g++ -std=c++11 *.cpp -o nom |
| Code::Blocks | Appuyer sur F9|

### **Windows**

|Compilateur | Commande|
|------------ | -------------|
|MinGW | g++ -std=c++11 *.cpp -o nom |
|Code::Blocks | Appuyer sur F9|

## Execution depuis le terminal ( CMD pour windows )
| OS | Commande |
|------------ | ------------- |
| Linux | ./nom |
| Windows | nom |

Le fichier **nom** doit être dans le répertoire courant sinon utiliser ./chemin/nom où chemin est le chemin d'accès au fichier depuis le répertoire courant. Pour windows même commande retirez juste ./
