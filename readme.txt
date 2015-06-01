=============CONFIGURATION PROXY INSA===============
En console penser à taper
export http_proxy="http://wwwcache.insa-toulouse.fr:3128"; export https_proxy="https://wwwcache.insa-toulouse.fr:3128"

=============Accéder au code assembleur=============
objdump -D cible | less

=============SYNCHRO ENTRE DOSSIERS================
watch -n 10 "rsync -vr /tmp/<dossier>/media/<clé>"

================ FICHIER TEST =======================

Tous les tests du compilateur se situent dans le dossier PARSING_C_FILE_TEST
présent dans le dossier racine  avec les fichier
en .c et le résultat associé en assembleur dans le même fichier sans l'extension .c

Les codes de tests ne sont pas commentés mais les fichiers assembleurs générés oui.

La commande :

make clean;make;./analyser < test.c

Permet de lancer le parsage du fichier test.c présent dans le dossier racine.
Le fichier assembleur généré sans les sauts est le fichier toto
Le fichier assembleur généré avec les sauts est le fichier asm_with_jump

Le code VHDL est présent dans le dossier VHDL
