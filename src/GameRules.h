
#pragma once


class cWorld;


class cGameRules   // tolua_export
{   // tolua_export
public:
	cGameRules(cWorld & a_World, AString a_DataPath);

	// tolua_begin

	/** Setter for each gamerule  */
	void SetAnnounceAdvancements(bool a_AnnounceAdvancements);

	void SetCommandBlockOutput(bool a_CommandBlockOutput) { m_CommandBlockOutput = a_CommandBlockOutput; }

	void SetDisableElytraMovementCheck(bool a_DisableElytraMovementCheck) { m_DisableElytraMovementCheck = a_DisableElytraMovementCheck; }

	void SetDoDaylightCycle(bool a_DoDaylightCycle);

	void SetDoEntityDrops(bool a_DoEntityDrops) { m_DoEntityDrops = a_DoEntityDrops; }

	void SetDoFireTick(bool a_DoFireTick) { m_DoFireTick = a_DoFireTick; }

	void SetDoLimitedCrafting(bool a_DoLimitedCrafting) { m_DoLimitedCrafting = a_DoLimitedCrafting; }

	void SetDoMobLoot(bool a_DoMobLoot) { m_DoMobLoot = a_DoMobLoot; }

	void SetDoMobSpawning(bool a_DoMobSpawning) { m_DoMobSpawning = a_DoMobSpawning; }

	void Set(bool a_DoTileDrops) { m_DoTileDrops = a_DoTileDrops; }

	void SetDoWeatherCycle(bool a_DoWeatherCycle) { m_DoWeatherCycle = a_DoWeatherCycle; }

	void SetKeepInventory(bool a_KeepInventory) { m_KeepInventory = a_KeepInventory; }

	void SetLogAdminCommands(bool a_LogAdminCommands) { m_LogAdminCommands = a_LogAdminCommands; }

	void SetMaxCommandChainLength(int a_MaxCommandChainLength) { m_MaxCommandChainLength = a_MaxCommandChainLength; }

	void SetMaxEntityCramming(int a_MaxEntityCramming) { m_MaxEntityCramming = a_MaxEntityCramming; }

	void SetMobGriefing(bool a_MobGriefing);

	void SetNaturalRegeneration(bool a_NaturalRegeneration) { m_NaturalRegeneration = a_NaturalRegeneration; }

	void SetRandomTickSpeed(int a_RandomTickSpeed) { m_RandomTickSpeed = a_RandomTickSpeed; }

	void SetReducedDebugInfo(bool a_ReducedDebugInfo) { m_ReducedDebugInfo = a_ReducedDebugInfo; }

	void SetSendCommandFeedback(bool a_SendCommandFeedback) { m_SendCommandFeedback = a_SendCommandFeedback; }

	void SetShowDeathMessages(bool a_ShowDeathMessages);

	void SetSpawnRadius(int a_SpawnRadius) { m_SpawnRadius = a_SpawnRadius; }

	void SetSpectatorsGenerateChunks(bool a_SpectatorsGenerateChunks) { m_SpectatorsGenerateChunks = a_SpectatorsGenerateChunks; }


	/** Getters for each gamerule  */
	bool GetAnnounceAdvancements() { return m_AnnounceAdvancements; }

	bool GetCommandBlockOutput() { return m_CommandBlockOutput; }

	bool GetDisableElytraMovementCheck() { return m_DisableElytraMovementCheck; }

	bool GetDoDaylightCycle() { return m_DoDaylightCycle; }

	bool GetDoEntityDrops() { return m_DoEntityDrops; }

	bool GetDoFireTick() { return m_DoFireTick; }

	bool GetDoLimitedCrafting() { return m_DoLimitedCrafting; }

	bool GetDoMobLoot() { return m_DoMobLoot; }

	bool GetDoMobSpawning() { return m_DoMobSpawning; }

	bool GetDoTileDrops() { return m_DoTileDrops; }

	bool GetDoWeatherCycle() { return m_DoWeatherCycle; }

	bool GetKeepInventory() { return m_KeepInventory; }

	bool GetLogAdminCommands() { return m_LogAdminCommands; }

	int GetMaxCommandChainLength() { return m_MaxCommandChainLength; }

	int GetMaxEntityCramming() { return m_MaxEntityCramming; }

	bool GetMobGriefing() { return m_MobGriefing; }

	bool GetNaturalRegeneration() { return m_NaturalRegeneration; }

	int GetRandomTickSpeed() { return m_RandomTickSpeed; }

	bool GetReducedDebugInfo() { return m_ReducedDebugInfo; }

	bool GetSendCommandFeedback() { return m_SendCommandFeedback; }

	bool GetShowDeathMessages() { return m_ShowDeathMessages; }

	int GetSpawnRadius() { return m_SpawnRadius; }

	bool GetSpectatorsGenerateChunks() { return m_SpectatorsGenerateChunks; }

	// tolua_end

private:
	cWorld & m_World;

	bool m_AnnounceAdvancements;
	bool m_CommandBlockOutput;  // Might not work
	bool m_DisableElytraMovementCheck;  // Unimplemented
	bool m_DoDaylightCycle;
	bool m_DoEntityDrops;
	bool m_DoFireTick;  // Unimplemented
	bool m_DoLimitedCrafting;  // Unimplemented
	bool m_DoMobLoot;
	bool m_DoMobSpawning;  // Unimplemented
	bool m_DoTileDrops;  // Unimplemented
	bool m_DoWeatherCycle;
	bool m_KeepInventory;
	bool m_LogAdminCommands;  // Unimplemented
	int  m_MaxCommandChainLength;  // Unimplemented
	int  m_MaxEntityCramming;  // Unimplemented
	bool m_MobGriefing;
	bool m_NaturalRegeneration;  // Unimplemented
	int  m_RandomTickSpeed;  // Unimplemented
	bool m_ReducedDebugInfo;  // Unimplemented
	bool m_SendCommandFeedback;  // Unimplemented
	bool m_ShowDeathMessages;
	int	 m_SpawnRadius;  // Unimplemented
	bool m_SpectatorsGenerateChunks;  // Unimplemented

	void Initialize(AString a_DataPath);
};   // tolua_export




