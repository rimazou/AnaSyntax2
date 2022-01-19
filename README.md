#PROJET COMP 20212022 SIL2

##Equipe 
	- Akli Hiba
	- Benmoussat Mohammed Mouad
	- Cherif Mounir
	- Douaa Laib
	- Zourane Rima

##Instructions
	1.Traduire le fichier parser.l [flex parser.l]
	2.Construire l'analyseur syntaxe avec Bison      [bison -d parser.y]
3. Compiler avec gcc parser.tab.c lex.yy.c
4.a Analyse en console Executer l'executable sans parametre              [.a.out]
		afin de terminer l'écriture du programme il suffit d'inserer le caractère End Of File avec control+D sous Linux ou control+Z sous Windows.
	4.b Analyse en fichier Faire passer le chemin de fichier comme argument  [.a.out code.txt]
		e.g .a.out fichier_dans_le_meme_repertoire
		e.g .a.out chemin_absolu_du_fichier


P.S un fichier contenant un programme type est joint avec l'analyseur

IMPORTANT : la sequence de fin de ligne du fichier d'entrée doit etre sous format LF (\n) et non CRLF
