
#include "Globals.h"  // NOTE: MSVC stupidness requires this to be the same across all modules

#include "GameRules.h"
#include "IniFile.h"
#include "World.h"





cGameRules::cGameRules(cWorld & a_World, AString a_DataPath) :
	m_World(a_World)
{
	Initialize(a_DataPath);
}





void cGameRules::Initialize(AString a_DataPath)
{
	cIniFile Ini;
	const AString Name = "GameRules";


	if (!Ini.ReadFile(a_DataPath + "/gamerules.ini"))
	{
		LOGINFO("%s: Cannot read gamerules.ini file, using default gamerules", __FUNCTION__);
	}
	else
	{
		if (Ini.FindKey(Name) != cIniFile::noID)
		{
			m_AnnounceAdvancements = Ini.GetValueB(Name, "announceAdvancements", true);
			m_CommandBlockOutput = Ini.GetValueB(Name, "commandBlockOutput", true);
			m_DisableElytraMovementCheck = Ini.GetValueB(Name, "disableElytraMovementCheck", false);
			m_DoDaylightCycle = Ini.GetValueB(Name, "doDaylightCycle", true);
			m_DoEntityDrops = Ini.GetValueB(Name, "doEntityDrops", true);
			m_DoFireTick = Ini.GetValueB(Name, "doFireTick", true);
			m_DoLimitedCrafting = Ini.GetValueB(Name, "doLimitedCrafting", false);
			m_DoMobLoot = Ini.GetValueB(Name, "doMobLoot", true);
			m_DoMobSpawning = Ini.GetValueB(Name, "doMobSpawning", true);
			m_DoTileDrops = Ini.GetValueB(Name, "doTileDrops", true);
			m_DoWeatherCycle = Ini.GetValueB(Name, "doWeatherCycle", true);
			m_KeepInventory = Ini.GetValueB(Name, "keepInventory", false);
			m_LogAdminCommands = Ini.GetValueB(Name, "logAdminCommands", true);
			m_MaxCommandChainLength = Ini.GetValueI(Name, "maxCommandChainLength", 65536);
			m_MaxEntityCramming = Ini.GetValueI(Name, "maxEntityCramming", 24);
			m_MobGriefing = Ini.GetValueB(Name, "mobGriefing", true);
			m_NaturalRegeneration = Ini.GetValueB(Name, "naturalRegeneration", true);
			m_RandomTickSpeed = Ini.GetValueI(Name, "randomTickSpeed", 3);
			m_ReducedDebugInfo = Ini.GetValueB(Name, "reducedDebugInfo", false);
			m_SendCommandFeedback = Ini.GetValueB(Name, "sendCommandFeedback", true);
			m_ShowDeathMessages = Ini.GetValueB(Name, "showDeathMessages", true);
			m_SpawnRadius = Ini.GetValueI(Name, "spawnRadius", 10);
			m_SpectatorsGenerateChunks = Ini.GetValueB(Name, "spectatorsGenerateChunks", true);

			return;
		}

		LOGWARNING("%s: GameRules key not found in gamerules.ini, using default gamerules", __FUNCTION__);
	}

	// default gamerules
	m_AnnounceAdvancements = true;
	m_CommandBlockOutput = true;
	m_DisableElytraMovementCheck = false;
	m_DoDaylightCycle = true;
	m_DoEntityDrops = true;
	m_DoFireTick = true;
	m_DoLimitedCrafting = false;
	m_DoMobLoot = true;
	m_DoMobSpawning = true;
	m_DoTileDrops = true;
	m_DoWeatherCycle = true;
	m_KeepInventory = false;
	m_LogAdminCommands = true;
	m_MaxCommandChainLength = 65536;
	m_MaxEntityCramming = 24;
	m_MobGriefing = true;
	m_NaturalRegeneration = true;
	m_RandomTickSpeed = 3;
	m_ReducedDebugInfo = false;
	m_SendCommandFeedback = true;
	m_ShowDeathMessages = true;
	m_SpawnRadius = 10;
	m_SpectatorsGenerateChunks = true;
}





void cGameRules::SetShowDeathMessages(bool a_ShowDeathMessages)
{
	m_World.SetBroadcastDeathMessages(a_ShowDeathMessages);
	m_ShowDeathMessages = a_ShowDeathMessages;
}





void cGameRules::SetMobGriefing(bool a_MobGriefing)
{
	m_World.SetVillagersShouldHarvestCrops(a_MobGriefing);
	m_MobGriefing = a_MobGriefing;
}





void cGameRules::SetDoDaylightCycle(bool a_DoDaylightCycle)
{
	m_World.SetDaylightCycleEnabled(a_DoDaylightCycle);
	m_DoDaylightCycle = a_DoDaylightCycle;
}





void cGameRules::SetAnnounceAdvancements(bool a_AnnounceAdvancements)
{
	m_World.SetBroadcastAchievementMessages(a_AnnounceAdvancements);
	m_AnnounceAdvancements = a_AnnounceAdvancements;
}



