/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/TextInput_pa.bundle/TextInput_pa
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_pa : TIKeyboardInputManagerZephyr
+(id)decompositionMap;
+(id)compositionMap;
-(id)replacementForDoubleSpace;
-(BOOL)doesComposeText;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(id)sentenceDelimitingCharacters;
@end
