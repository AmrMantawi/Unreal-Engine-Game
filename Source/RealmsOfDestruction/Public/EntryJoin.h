// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "OnlineSessionSettings.h"
#include "EntryJoin.generated.h"

/**
 * 
 */

UCLASS()
class REALMSOFDESTRUCTION_API UEntryJoin : public UButton
{
	GENERATED_BODY()

public:
	UEntryJoin();

	FOnlineSessionSearchResult searchResult;

	UFUNCTION()
	void JoinSession();
};

