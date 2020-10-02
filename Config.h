namespace Config {

	namespace Offsets {

		constexpr auto pGameManager = 0x5D825F8;
		constexpr auto pRoundManager = 0x70FEF08;
		constexpr auto pVTable = 0x530FE80; // VTMarker

		namespace EntityList {
			constexpr auto pChain = 0xE0;
			constexpr auto pObject = 0x8;
			constexpr auto pPawn = 0x50;

			namespace Info {
				constexpr auto pChain_1 = 0x18;
				constexpr auto pChain_2 = 0xD8;

			}

			namespace Entity {
				constexpr auto pChain_1 = 0x80;
				constexpr auto pChain_2 = 0xF0;

			}

			namespace Marker {
				constexpr auto pSpotted = 0x69A;
			}

			namespace State {
				constexpr auto pChain_1 = 0x300;
			}

		}

	}

	namespace Decryption {

		namespace EntityList {
			constexpr auto pDecryption1 = 0x35;
			constexpr auto pDecryption2 = 0xB153062A46B96BA5;
			constexpr auto pDecryption3 = 0x14;
			constexpr auto pDecryption4 = 0x2C;

		}
	}

}