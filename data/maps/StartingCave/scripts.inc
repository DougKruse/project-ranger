StartingCave_MapScripts::
	.byte 0

StartingCave_Starter::
	lock
	faceplayer
	msgbox TrialCave_Text_NewStarter, MSGBOX_DEFAULT
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	fadescreen FADE_TO_BLACK
	special ChooseStarter
	waitstate
	msgbox TrialCave_Text_AfterChoice, MSGBOX_DEFAULT
	release
	end

StartingCave_Text_NewStarter:
    .string "Oh damn, my bag!$"

StartingCave_Text_AfterChoice:
    .string "Oh no, the other\n balls are broken!$"