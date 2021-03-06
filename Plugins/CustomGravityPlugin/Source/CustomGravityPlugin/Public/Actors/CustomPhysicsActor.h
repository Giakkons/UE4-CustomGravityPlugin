// Copyright 2015 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//

#pragma once

#include "CustomPhysicsActor.generated.h"

UCLASS()
class  CUSTOMGRAVITYPLUGIN_API ACustomPhysicsActor : public AActor
{
	GENERATED_BODY()

public:
		/**
		* Default UObject constructor.
		*/
		ACustomPhysicsActor(const FObjectInitializer& ObjectInitializer);


private:


	/** StaticMesh Component*/
	UPROPERTY(Category = "CustomPhysicsActor", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* MeshComponent;

	/** Gravity Component */
	UPROPERTY(Category = "CustomPhysicsActor", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCustomGravityComponent* GravityComponent;


public:

	/** Returns StaticMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return MeshComponent; }

	/** Returns GravityComponent subobject **/
	FORCEINLINE class UCustomGravityComponent* GetGravityComponent() const { return GravityComponent; }

};