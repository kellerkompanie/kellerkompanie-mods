class CfgWorlds {
	class WaterExPars;
    class DefaultWorld;
    class CAWorld: DefaultWorld {

        class Underwater {
			noWaterFog = -0.3;
			fullWaterFog = 0.1;
			deepWaterFog = 10;
			waterFogDistance = 20;
			waterFogDistanceNear = 0;
			waterColor[] = {0.109804,0.054901998,0};
			deepWaterColor[] = {0.109804,0.054901998,0};
			surfaceColor[] = {0.109804,0.054901998,0};
			deepSurfaceColor[] = {0.109804,0.054901998,0};
		};
		
		class SeaWaterShaderPars {
			refractionMoveCoef = 0.01;
			minWaterOpacity = 0.65;
			waterOpacityDistCoef = 0.07;
			underwaterOpacity = 0.2;
			waterOpacityFadeStart = 100;
			waterOpacityFadeLength = 20;
		};

        class WaterExPars : WaterExPars {
            surfaceOpacity = 0.7;
            fogDensity = 0.035;
			fogColor[]={0.109804,0.054901998,0};
			fogColorExtinctionSpeed[] = {0.32814, 0.0149, 0.00511};
			ligtExtinctionSpeed[] = {0.32814, 0.0149, 0.00511};
			diffuseLigtExtinctionSpeed[] = {0.36814, 0.0449, 0.02511};
			fogGradientCoefs[] = {1, 1.0, 1};
			fogColorLightInfluence[] = {0.8, 0.2, 1.0};
			shadowIntensity = 1.0;
			ssReflectionStrength = 0.85;
			ssReflectionMaxJitter = 1.0;
			ssReflectionRippleInfluence = 0.2;
			ssReflectionEdgeFadingCoef = 10.0;
			ssReflectionDistFadingCoef = 4.0;
			refractionMinCoef = 0.03;
			refractionMaxCoef = 0.14;
			refractionMaxDist = 5.1;
			specularMaxIntensity = 100;
			specularPowerOvercast0 = 750;
			specularPowerOvercast1 = 50;
			specularNormalModifyCoef = 0.015;
			foamAroundObjectsIntensity = 0.15;
			foamAroundObjectsFadeCoef = 8.0;
			foamColorCoef = 2.0;
			foamDeformationCoef = 0.02;
			foamTextureCoef = 0.2;
			foamTimeMoveSpeed = 0.2;
			foamTimeMoveAmount = 0.1;
			shoreDarkeningMaxCoef = 0.45;
			shoreDarkeningOffset = 0.36;
			shoreDarkeningGradient = 0.08;
			shoreWaveTimeScale = 0.8;
			shoreWaveShifDerivativeOffset = -0.8;
			shoreFoamIntensity = 0.25;
			shoreMaxWaveHeight = 0.15;
			shoreWetLayerReflectionIntensity = 0.55;
		};
	};

	class Enoch: CAWorld {
		class Sea {
			MaxTide = 40;            
		};

        class Underwater {
			noWaterFog = -0.3;
			fullWaterFog = 0.1;
			deepWaterFog = 10;
			waterFogDistance = 20;
			waterFogDistanceNear = 0;
			waterColor[] = {0.109804,0.054901998,0};
			deepWaterColor[] = {0.109804,0.054901998,0};
			surfaceColor[] = {0.109804,0.054901998,0};
			deepSurfaceColor[] = {0.109804,0.054901998,0};
		};
		
		class SeaWaterShaderPars {
			refractionMoveCoef = 0.01;
			minWaterOpacity = 0.65;
			waterOpacityDistCoef = 0.07;
			underwaterOpacity = 0.2;
			waterOpacityFadeStart = 100;
			waterOpacityFadeLength = 20;
		};
        
        class WaterExPars : WaterExPars {
            surfaceOpacity = 0.7;
            fogDensity = 0.035;
			fogColor[]={0.109804,0.054901998,0};
			fogColorExtinctionSpeed[] = {0.32814, 0.0149, 0.00511};
			ligtExtinctionSpeed[] = {0.32814, 0.0149, 0.00511};
			diffuseLigtExtinctionSpeed[] = {0.36814, 0.0449, 0.02511};
			fogGradientCoefs[] = {1, 1.0, 1};
			fogColorLightInfluence[] = {0.8, 0.2, 1.0};
			shadowIntensity = 1.0;
			ssReflectionStrength = 0.85;
			ssReflectionMaxJitter = 1.0;
			ssReflectionRippleInfluence = 0.2;
			ssReflectionEdgeFadingCoef = 10.0;
			ssReflectionDistFadingCoef = 4.0;
			refractionMinCoef = 0.03;
			refractionMaxCoef = 0.14;
			refractionMaxDist = 5.1;
			specularMaxIntensity = 100;
			specularPowerOvercast0 = 750;
			specularPowerOvercast1 = 50;
			specularNormalModifyCoef = 0.015;
			foamAroundObjectsIntensity = 0.15;
			foamAroundObjectsFadeCoef = 8.0;
			foamColorCoef = 2.0;
			foamDeformationCoef = 0.02;
			foamTextureCoef = 0.2;
			foamTimeMoveSpeed = 0.2;
			foamTimeMoveAmount = 0.1;
			shoreDarkeningMaxCoef = 0.45;
			shoreDarkeningOffset = 0.36;
			shoreDarkeningGradient = 0.08;
			shoreWaveTimeScale = 0.8;
			shoreWaveShifDerivativeOffset = -0.8;
			shoreFoamIntensity = 0.25;
			shoreMaxWaveHeight = 0.15;
			shoreWetLayerReflectionIntensity = 0.55;
		};

        /* Malden
        class SeaWaterShaderPars {
            minWaterOpacity = 0;
            refractionMoveCoef = 0.03;
            underwaterOpacity = 0.5;
            waterOpacityDistCoef = 0.4;
            waterOpacityFadeLength = 120;
            waterOpacityFadeStart = 60;
        };
        class WaterExPars {
            fogDensity=0.07;
			fogColor[]={0.03015,0.071549997,0.090449996};
			fogColorExtinctionSpeed[]={0.1814,0.015900001,0.0111};
			ligtExtinctionSpeed[]={0.1814,0.015900001,0.0111};
			diffuseLigtExtinctionSpeed[]={0.38139999,0.2159,0.2111};
			fogGradientCoefs[]={0.34999999,1,1.7};
			fogColorLightInfluence[]={0.80000001,0.2,1};
			shadowIntensity=0;
			ssReflectionStrength=0.85000002;
			ssReflectionMaxJitter=1;
			ssReflectionRippleInfluence=0.2;
			ssReflectionEdgeFadingCoef=10;
			ssReflectionDistFadingCoef=4;
			refractionMinCoef=0.029999999;
			refractionMaxCoef=0.14;
			refractionMaxDist=5.0999999;
			specularMaxIntensity=100;
			specularPowerOvercast0=750;
			specularPowerOvercast1=50;
			specularNormalModifyCoef=0.015;
			foamAroundObjectsIntensity=0.15000001;
			foamAroundObjectsFadeCoef=8;
			foamColorCoef=2;
			foamDeformationCoef=0.02;
			foamTextureCoef=0.2;
			foamTimeMoveSpeed=0.2;
			foamTimeMoveAmount=0.1;
			shoreDarkeningMaxCoef=0.44999999;
			shoreDarkeningOffset=0.36000001;
			shoreDarkeningGradient=0.079999998;
			shoreWaveTimeScale=0.80000001;
			shoreWaveShifDerivativeOffset=-0.80000001;
			shoreFoamIntensity=0.25;
			shoreMaxWaveHeight=0.15000001;
			shoreWetLayerReflectionIntensity=0.55000001;
            surfaceOpacity = 0;
        };
        */
	};
};