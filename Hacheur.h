#ifndef Hacheur_h
#define Hacheur_h

/**
*Prend en entrée:
	- Le nouveau bloc d'opérations
	- L'identifiant du bloc pérécédent
	- Le nonce du nouveau bloc
* La fonction doit retourner le hashage des paramétres en entrèes en utilisant le hashage SHA-256 (64 bits en sortie) 
**/
std::string hach(std::string newBlock, std::string previousBlockId, std::string nonce);

#endif