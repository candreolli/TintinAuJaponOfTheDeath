﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#pragma once
#define WANTDLLEXP
#ifdef WANTDLLEXP		//exportation dll
#define DLL  __declspec( dllexport )
#define EXTERNC extern "C"
#else
#define DLL		//standard
#define EXTERNC
#endif
#include "Vaisseau.h"
#include<vector>

namespace Model
{
	class DLL Joueur
	{
	private :
		int nbArtefacts;
		Vaisseau vaisseau;

	public:
		Joueur() {}
		~Joueur() {}
	}; 

	EXTERNC DLL Joueur* JOUEUR_New() { return new Joueur(); }
	EXTERNC DLL void JOUEUR_Delete(Joueur* obj) { delete obj; }
} 

