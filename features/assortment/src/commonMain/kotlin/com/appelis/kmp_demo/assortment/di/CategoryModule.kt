package com.appelis.kmp_demo.assortment.di

import com.appelis.kmp_demo.assortment.CategoryViewModel
import org.koin.core.annotation.ComponentScan
import org.koin.core.module.Module
import org.koin.core.module.dsl.factoryOf
import org.koin.dsl.module

@org.koin.core.annotation.Module
@ComponentScan("com.appelis.kmp_demo.assortment")
class AssortmentModule