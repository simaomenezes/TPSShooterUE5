// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSCharacter.h"


#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ATPSCharacter::ATPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a camera boom (pulls in towards the character if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character
	CameraBoom->bUseAttachParentBound = true; // Rotate the arm based on the controller

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach camera to end of boom
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	

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

