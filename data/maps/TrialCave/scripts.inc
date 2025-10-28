TrialCave_MapScripts::
	.byte 0

TrialCave_Starter::
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

TrialCave_EventScript_Doug_Test::
	trainerbattle_single TRAINER_DOUG_TEST, Test_Text_DougIntro, Test_Text_DougDefeated
	end

TrialCave_Text_NewStarter:
    .string "Hey, free stuff?$"

TrialCave_Text_AfterChoice:
    .string "Yoink!$"