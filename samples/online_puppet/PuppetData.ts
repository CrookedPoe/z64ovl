import { Age, Shield, Sword, Strength, IOOTCore, } from 'modloader64_api/OOT/OOTAPI';
import { IModLoaderAPI } from 'modloader64_api/IModLoaderAPI';
import { ACTOR_T_PADDING } from './PuppetOverlord';
import { bus } from 'modloader64_api/EventHandler';
import { Z64OnlineEvents, RemoteSoundPlayRequest } from '@OotOnline/Z64API/OotoAPI';

export class PuppetData {
	pointer: number;
	ModLoader: IModLoaderAPI;
	core: IOOTCore;

private readonly copyFields: string[] = new Array<string>();

	constructor(pointer: number, ModLoader: IModLoaderAPI, core: IOOTCore) {
		this.copyFields.push('world');
		this.copyFields.push('anim');
	}

	get world(): Buffer { return this.ModLoader.emulator.rdReadBuffer(0x801DAA54, 0x00000014); }

	set world(world: Buffer) { this.ModLoader.emulator.rdWriteBuffer(this.pointer + 0x00000024, world); }

	get anim(): Buffer { return this.ModLoader.emulator.rdReadBuffer(0x801DAA54, 0x00000014); }

	set anim(anim: Buffer) { this.ModLoader.emulator.rdWriteBuffer(this.pointer + 0x00000024, anim); }

toJSON() {
		const jsonObj: any = {};
		for (let i = 0; i < this.copyFields.length; i++) {
			jsonObj[this.copyFields[i]] = (this as any)[this.copyFields[i]];
		}

		return jsonObj;
	}
}
