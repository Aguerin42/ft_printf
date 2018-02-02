ft_printf
------------------------------------

Ce projet a pour but de recoder la fonction `printf`.

## Utilisation et compilation

*ft_printf* utilise des fonctions de la [libft][] et de la [libag][] et a besoin de leurs headers pour pouvoir être compilé. Il faut fournir au _Makefile_ le chemin vers les dossiers les contenant à l'aide des variables *LIBFT_INC* et *LIBAG_INC*.

	$> make LIBFT_INC=../libft/includes LIBAG_INC=../libag/includes all

La documentation peut être créée avec la commande suivante :

	$> make doxygen

La documentation est générée grâce à [Doxygen][]. Le _Makefile_ utilise l'alias `doxygen` pour faire appel à l'exécutable, mais si celui-ci n'est pas défini il faut utiliser la commande :

	$> make doxygen DOXYGEN=/CHEMIN/VERS/EXECUTABLE/DE/DOXYGEN

[libft]: https://github.com/aguerin42/libft.git
[libag]: https://github.com/aguerin42/libag.git
[Doxygen]: https://github.com/doxygen/doxygen
