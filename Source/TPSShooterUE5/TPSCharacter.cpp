// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSCharacter.h"

// Sets default values
ATPSCharacter::ATPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATPSCharacter::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("BeginPlay() called!."));

	int myInt{ 42 };
	UE_LOG(LogTemp, Warning, TEXT("int myInt: %d"), myInt);

	float myFloat{ 3.14159f};
	UE_LOG(LogTemp, Warning, TEXT("float myFloat: %f"), myFloat);

	double myDouble{ 3.14159 };
	UE_LOG(LogTemp, Warning, TEXT("double myDouble: %lf"), myDouble);

	TCHAR myChar{ 'A' };
	UE_LOG(LogTemp, Warning, TEXT("char myChar: %c"), myChar);

	wchar_t myWChar{ L'A' };
	UE_LOG(LogTemp, Warning, TEXT("wchar_t myWChar: %%lc"), myWChar);

	bool myBool{ true };
	UE_LOG(LogTemp, Warning, TEXT("bool myBool: %d"), myBool);

	UE_LOG(LogTemp, Warning, TEXT("int: %d, float: %f, bool: %d"), myInt, myFloat, myBool);

	FString myString{ TEXT("Hello World!") };

	UE_LOG(LogTemp, Warning, TEXT("FString: %s"), *myString);

	UE_LOG(LogTemp, Warning, TEXT("Name of instance: %s"), *GetName());

	
}

// Called every frame
void ATPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

