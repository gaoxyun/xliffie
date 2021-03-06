//
//  TranslationPair.h
//  Xliffie
//
//  Created by b123400 on 6/1/15.
//  Copyright (c) 2015 b123400. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "File.h"

@interface TranslationPair : NSObject

@property (nonatomic, strong) NSString *source;
@property (nonatomic, strong) NSString *target;
@property (nonatomic, strong) NSString *note;

@property (nonatomic, strong) TranslationPair *alternativePair; // map another langauge

@property (nonatomic, weak) File *file;

- (instancetype)initWithXMLElement:(NSXMLElement*)element;

- (BOOL)matchSearchFilter:(NSString*)filter;
- (NSArray*)formatWarningsForProposedTranslation:(NSString*)newTranslation;

- (NSString*)sourceForDisplay;
- (NSArray <NSString*> *)warningsForTarget;

@end
