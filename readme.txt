=============CONFIGURATION PROXY INSA===============
En console penser à taper export http_proxy="http://wwwcache.insa-toulouse.fr:3128"
			  export https_proxy="https://wwwcache.insa-toulouse.fr:3128"

=============SYNCHRO ENTRE DOSSIERS================
watch -n 10 "rsync -vr /tmp/<dossier>/media/<clé>"