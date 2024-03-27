package com.appelis.kmp_demo.startup_ui_logic

import com.appelis.kmp_demo.core.SharedViewModel
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value


class AppStartupViewModel(
): SharedViewModel<AppStartupViewState, Nothing>(), AppStartupComponent.Actions {
    private val _viewState: MutableValue<AppStartupViewState> = MutableValue(AppStartupViewState())
    override val viewState: Value<AppStartupViewState> = _viewState

    override fun finishStartup() {
    }
}