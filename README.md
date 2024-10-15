# 🥩 need4steak (n4s)

<img width="690" alt="Capture d’écran 2024-10-14 à 22 56 55" src="https://github.com/user-attachments/assets/a6d863cb-ecd6-4f9c-90c8-1acae24d66c6">

### **Projet réalisé à Epitech - Grade : A**  
=======
# 🥩 need4steak (n4s)

### **Projet réalisé à Epitech - Grade : A**  

---

## 📜 **Description du projet**

**need4steak** est un projet où nous avons implémenté une version simplifiée d'une intelligence artificielle (IA) pour un simulateur de voiture autonome. L'objectif est de contrôler une voiture dans un environnement de course en utilisant des algorithmes de détection de distance et de vitesse, ainsi qu'une gestion efficace de la trajectoire.

### 🔥 **Objectifs :**
- Implémenter une IA pour diriger une voiture autonome.
- Utiliser les technologies de base pour développer un moteur décisionnel.
- Respecter les contraintes de performance pour optimiser les décisions de la voiture.

---

## ⚙️ **Technologies utilisées**

[C Programming](https://upload.wikimedia.org/wikipedia/commons/thumb/3/35/The_C_Programming_Language_logo.svg/200px-The_C_Programming_Language_logo.svg.png)
- **Langage** : C

[Makefile](https://img.icons8.com/external-justicon-flat-justicon/344/external-makefile-responsive-web-design-justicon-flat-justicon.png)
- **Outils** : Makefile pour automatiser la compilation.

[Git](https://git-scm.com/images/logos/downloads/Git-Logo-2Color.png)
- **Versionning** : Git pour la gestion du code source.

[C Programming](https://upload.wikimedia.org/wikipedia/commons/thumb/3/35/The_C_Programming_Language_logo.svg/200px-The_C_Programming_Language_logo.svg.png)
- **Langage** : C

[Makefile](https://img.icons8.com/external-justicon-flat-justicon/344/external-makefile-responsive-web-design-justicon-flat-justicon.png)
- **Outils** : Makefile pour automatiser la compilation.

[Git](https://git-scm.com/images/logos/downloads/Git-Logo-2Color.png)
- **Versionning** : Git pour la gestion du code source.

[Testing](https://upload.wikimedia.org/wikipedia/commons/thumb/8/84/Unit_testing_icon.svg/1024px-Unit_testing_icon.svg.png)
- **Tests** : Tests unitaires pour assurer la fiabilité du code.

---

## 📊 **Schéma du fonctionnement de l'IA**

```text
[ Capteurs ]
     |
     v
[ Détection d'obstacles ] --> [ Algorithme de décision ]
                                  |
                                  v
                        [ Calcul de trajectoire ]
                                  |
                                  v
                      [ Envoi des commandes à la voiture ]
```

L'IA fonctionne en lisant les données des capteurs (comme les distances et les angles), les traite pour prendre des décisions en temps réel, et ajuste la vitesse et la direction de la voiture en fonction des obstacles.

---

## 🏆 **Performances obtenues**

| Critère            | Résultat       |
|--------------------|----------------|
| **Grade final**    | A              |
| **TA**             | 100%           |
| **Temps de parcours** | 95% du temps maximal |

Nous avons réussi à obtenir **100% à la TA** et **Grade A** pour ce projet, grâce à une optimisation fine des algorithmes et à une gestion efficace des ressources.

---

## 📂 **Structure du projet**

```bash
.
├── src/
│   ├── main.c         # Point d'entrée de l'application
│   ├── sensors.c      # Gestion des capteurs
│   ├── decision.c     # Algorithmes de décision
│   └── utils.c        # Fonctions utilitaires
├── include/
│   └── need4steak.h   # Header contenant les prototypes
├── Makefile           # Compilation du projet
└── README.md          # Fichier de documentation
```

---

## 🏎️ **Fonctionnalités**

1. **Lecture des données de capteurs** : L'IA lit les distances, vitesses et angles à chaque frame pour prendre des décisions.
2. **Calcul de la trajectoire optimale** : Le moteur décisionnel ajuste en temps réel la trajectoire.
3. **Gestion d'obstacles** : Evite les obstacles en réajustant la direction.
4. **Optimisation de la vitesse** : Accélère dans les lignes droites, ralentit dans les virages.

---

## 🛠️ **Instructions d'installation**

### 1. Cloner le dépôt
```bash
git clone https://github.com/votre-repo/need4steak.git
cd need4steak
```

### 2. Compiler le projet
```bash
make
```

### 3. Exécuter le simulateur
```bash
./need4steak
```

---

## 📑 **Contributeurs**

- **Aaron** ([@Naingui74](https://github.com/Naingui74)) – Développeurs
- **Lucas** ([@lucasludovic]) - Développeurs
- **Tilio** ([@TilioHuart]) - Développeurs

---

Merci d'avoir consulté notre projet ! 🚗💨
